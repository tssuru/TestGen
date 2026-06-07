try:
    a,b,c=4,6,5
    def f(b):
        global c
        a*=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=0,9,2
    print(f(a),a,b,c)
    
except: print('error')
