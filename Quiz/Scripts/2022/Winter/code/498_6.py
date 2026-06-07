try:
    a,b,c=8,1,7
    def g(a):
        global c
        a=4
        b-=2
        c=3
        return a+b+c
    
    a,b,c=2,9,4
    print(g(a),a,b,c)
    
except: print('error')
