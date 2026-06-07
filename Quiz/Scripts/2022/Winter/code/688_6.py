try:
    a,b,c=9,2,5
    def f(a):
        global c
        a=5
        b*=2
        c=2
        return a+b+c
    
    a,b,c=8,5,1
    print(f(a),a,b,c)
    
except: print('error')
