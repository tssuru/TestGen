try:
    a,b,c=4,8,9
    def h(a):
        global c
        a+=2
        b=3
        c=3
        return a+b+c
    
    a,b,c=7,4,7
    print(h(a),a,b,c)
except: print('error')
