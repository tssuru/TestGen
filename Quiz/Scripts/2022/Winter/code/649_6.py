try:
    a,b,c=2,5,4
    def g(b):
        global c
        a=1
        b-=5
        c=2
        return a+b+c
    
    a,b,c=7,0,6
    print(g(a),a,b,c)
    
except: print('error')
