try:
    a,b,c=3,4,9
    def f(a):
        global c
        a=2
        b+=3
        c=5
        return a+b+c
    
    a,b,c=5,6,2
    print(f(a),a,b,c)
    
except: print('error')
