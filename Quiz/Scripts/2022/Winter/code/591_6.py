try:
    a,b,c=6,7,5
    def f(a):
        global c
        a=2
        b*=2
        c=5
        return a+b+c
    
    a,b,c=1,4,9
    print(f(a),a,b,c)
    
except: print('error')
