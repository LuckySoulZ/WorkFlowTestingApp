//
//  HomeView.swift
//  MovieApp
//
//  Created by Vong Nyuksoon on 12/03/2022.
//

import SwiftUI

struct HomeView: View {
    @EnvironmentObject private var appState: AppState
    @StateObject private var vm = HomeViewModel(dataService: MovieDataService())
    @State private var size: CGSize = .zero
    
    init() {
        UITableView.appearance().backgroundColor = UIColor(Color.theme.background)
    }
    
    var body: some View {
        ZStack {
            GeometryReader { geo in
                initial
                    .onAppear {
                        size = geo.size
                        vm.loadData()
                    }
            }
        }
    }
}

struct HomeView_Previews: PreviewProvider {
    static var previews: some View {
        TabView {
            NavigationView {
                HomeView()
                    .environmentObject(AppState())
                    .navigationTitle("home_tab_title")
            }
            .navigationViewStyle(.stack)
        }.preferredColorScheme(.dark)
    }
}

extension HomeView {
    
    private var initial: some View {
        VStack {
            if vm.isLoading {
                ProgressView()
                    .frame(maxWidth: .infinity, alignment: .center)
                    .accessibilityIdentifier("HomeProgressView")
            } else {
                List {
                    topRatedMoviesList
                    upcomingMoviesList
                }
                .accessibilityIdentifier("HomeList")
                .listStyle(.sidebar)
                .refreshable {
                    vm.loadData()
                }
            }
        }
    }
    
    private var topRatedMoviesList: some View {
        ScrollView(.horizontal, showsIndicators: false) {
            LazyHStack(spacing: 28) {
                ForEach(vm.topRatedMovies) { movie in
                    NavigationLink {
                        MovieDetailView(
                            movie: movie,
                            authService: appState.authService,
                            favoriteService: appState.favoriteService
                        )
                    } label: {
                        MovieCardView(movie: movie, isHighlighted: true)
                            .frame(height: 400)
                            .frame(maxWidth: .infinity)
                            .clipped()
                    }
                    .accessibilityIdentifier(movie.wrappedTitle)
                    .buttonStyle(.plain)
                }
            }
            .padding(.vertical)
        }
    }
    
    private var upcomingMoviesList: some View {
        VStack(alignment: .leading) {
            Text("upcoming")
                .font(.title2)
                .fontWeight(.bold)
            
            ScrollView(.horizontal, showsIndicators: false) {
                LazyHStack(spacing: 28) {
                    ForEach(vm.upcomingMovies) { movie in
                        NavigationLink {
                            MovieDetailView(
                                movie: movie,
                                authService: appState.authService,
                                favoriteService: appState.favoriteService
                            )
                        } label: {
                            MovieCardView(movie: movie)
                                .frame(width: size.width * 0.4 , height: 300)
                                .clipped()
                        }
                        .buttonStyle(.plain)
                    }
                }
                .padding(.vertical)
            }
        }
    }
}