/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   codexion.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ausmanov <ausmanov@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 23:35:02 by ausmanov          #+#    #+#             */
/*   Updated: 2026/07/13 23:47:30 by ausmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CODEXION_H
# define CODEXION_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>

typedef struct s_coder {
    int             num;
    pthread_t       thread;
    int             compile_times;
    time_t          last_compile;
    int             *dongles;
    struct s_table  *table;
}   t_coder;

#endif CODEXION_H