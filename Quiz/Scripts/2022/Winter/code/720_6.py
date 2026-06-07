try:
    a,b,c=8,7,9
    def f(a):
        global c
        a*=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=4,3,6
    print(f(a),a,b,c)
    
except: print('error')
