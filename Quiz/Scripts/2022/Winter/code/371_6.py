try:
    a,b,c=6,5,7
    def f(b):
        global c
        a=5
        b-=1
        c=2
        return a+b+c
    
    a,b,c=2,3,0
    print(f(a),a,b,c)
    
except: print('error')
