try:
    a,b,c=7,5,6
    def h(a):
        global c
        a=3
        b=4
        c=3
        return a+b+c
    
    a,b,c=3,7,2
    print(h(a),a,b,c)
    
except: print('error')
