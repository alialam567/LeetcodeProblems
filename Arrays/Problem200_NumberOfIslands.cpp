class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        // ALI ALAM GENIUS MANNNNN WOOHOOOOOOOO
        // IS A BIT CRUDE THOUGH?? DONT REALLY NEED TO USE 'v' could just use '0'
        // Make sure to mark as visited as soon as discovered so you don't visit a space more than once.
        // O(m x n)

        // Better way to go through the direction options instead of the 4 ifs..

        // int directions[4][2] = {
        //     {-1, 0}, // up
        //     {1, 0},  // down
        //     {0, -1}, // left
        //     {0, 1}   // right
        // };

        // for (auto& direction : directions) {
        //     int newX = x + direction[0];
        //     int newY = y + direction[1];

        //     if (newX >= 0 && newX < grid.size() &&
        //         newY >= 0 && newY < grid[0].size() &&
        //         grid[newX][newY] == '1') {

        //         grid[newX][newY] = '0';
        //         visitLand.push({newX, newY});
        //     }
        // }


        // Should probably use C++'s built in Pair instead of custom struct Point here
        struct Point { int x; int y; };

        int islands = 0;
        queue<Point> visitLand;

        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if ((grid[i][j] == 'v') || (grid[i][j] == '0')){
                    continue;
                }
                else{
                    visitLand.push(Point(i,j));
                    grid[i][j] = 'v';
                    while(!visitLand.empty()) {
                        if (visitLand.front().x > 0){
                            if (grid[visitLand.front().x-1][visitLand.front().y] == '1'){
                                grid[visitLand.front().x-1][visitLand.front().y] = 'v';
                                visitLand.push(Point(visitLand.front().x-1,visitLand.front().y));
                            }
                        }
                        if (visitLand.front().y > 0){
                            if (grid[visitLand.front().x][visitLand.front().y-1] == '1'){
                                grid[visitLand.front().x][visitLand.front().y-1] = 'v';
                                visitLand.push(Point(visitLand.front().x,visitLand.front().y-1));
                            }

                        }
                        if (visitLand.front().x < grid.size() - 1){
                            if (grid[visitLand.front().x+1][visitLand.front().y] == '1'){
                                grid[visitLand.front().x+1][visitLand.front().y] = 'v';
                                visitLand.push(Point(visitLand.front().x+1,visitLand.front().y));
                            }

                        }
                        if (visitLand.front().y < grid[0].size() - 1){
                            if (grid[visitLand.front().x][visitLand.front().y+1] == '1'){
                                grid[visitLand.front().x][visitLand.front().y+1] = 'v';
                                visitLand.push(Point(visitLand.front().x,visitLand.front().y+1));
                            }
                        }
                        grid[visitLand.front().x][visitLand.front().y] = 'v';
                        visitLand.pop();
                    } 
                    islands++;
                }
            }
        } 

        return islands;
        
    }
};