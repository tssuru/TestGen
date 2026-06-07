try:
    a,b,c=7,2,5
    def g(b):
        global c
        a=2
        b-=5
        c=5
        return a+b+c
    
    a,b,c=4,1,3
    print(g(a),a,b,c)
    
except: print('error')
