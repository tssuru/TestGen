try:
    a,b,c=7,6,0
    def f(a):
        global c
        a=3
        b-=5
        c=3
        return a+b+c
    
    a,b,c=5,2,7
    print(f(a),a,b,c)
    
except: print('error')
