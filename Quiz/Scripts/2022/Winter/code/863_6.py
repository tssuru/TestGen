try:
    a,b,c=1,7,9
    def g(b):
        global c
        a-=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=2,8,6
    print(g(a),a,b,c)
    
except: print('error')
