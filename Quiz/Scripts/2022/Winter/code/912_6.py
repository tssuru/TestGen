try:
    a,b,c=5,7,2
    def g(a):
        global c
        a=3
        b*=2
        c=5
        return a+b+c
    
    a,b,c=3,4,6
    print(g(a),a,b,c)
    
except: print('error')
