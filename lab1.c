/*
 * Implement your solution in thi file
 *
 */
 public static String mysteryExplosion(String word) {
        StringBuilder builder = new StringBuilder();
        for (int i = 0; i <= word.length(); i++) {
            builder.append (word,0, i);
        }
        return builder.toString();
    }
