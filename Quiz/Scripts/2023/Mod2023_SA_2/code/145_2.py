try:
    a,b,c=2,0,7
    def g(a):
        global c
        a-=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=2,3,9
    print(g(a),a,b,c)
    
except: print('error')
