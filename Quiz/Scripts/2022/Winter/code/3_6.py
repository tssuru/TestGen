try:
    a,b,c=4,7,1
    def f(b):
        global c
        a*=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=8,0,5
    print(f(a),a,b,c)
    
except: print('error')
