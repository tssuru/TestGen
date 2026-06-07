try:
    a,b,c=8,3,7
    def g(a):
        global c
        a=5
        b=3
        c=1
        return a+b+c
    
    a,b,c=4,1,9
    print(g(a),a,b,c)
    
except: print('error')
