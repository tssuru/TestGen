try:
    a,b,c=3,6,7
    def g(b):
        global c
        a=3
        b*=4
        c=5
        return a+b+c
    
    a,b,c=4,1,3
    print(g(a),a,b,c)
    
except: print('error')
