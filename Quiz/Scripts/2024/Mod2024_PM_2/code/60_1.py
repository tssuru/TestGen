try:
    a,b,c=2,4,6
    def g(b):
        global c
        a=5
        b-=2
        c=1
        return a+b+c
    
    a,b,c=5,3,1
    print(g(a),a,b,c)
    
except: print('error')
