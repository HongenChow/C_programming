int safe (int array[5][5]) {
    int direction = 0;
    for (int i = 0; i < 5; i++) 
        for (int j = 0; j < 5; j++) 
            if (array[i][j] == 2) {
                for (int k = 1; k < 5; k++) {
                    if (array[i - k][j] == 1 && (i - k) >= 0) {
                        direction = 1;
                        break;
                    } else if (array[i][j + k] == 1 && (j + k) <= 4) {
                        direction = 2;
                        break;
                    } else if (array[i + k][j] == 1 && (i + k) <= 4) {
                        direction = 3;
                        break;
                    } else if (array[i][j - k] == 1 && (j - k) >= 0) {
                        direction = 4;
                        break;
                    }
                }
                break;
            }
            
    return direction;
}