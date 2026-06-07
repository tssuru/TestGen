try:
    a,b,c=1,4,7
    def g(b):
        global c
        a=3
        b*=2
        c=5
        return a+b+c
    
    a,b,c=6,8,3
    print(g(a),a,b,c)
    
except: print('error')
