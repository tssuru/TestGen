try:
    a,b,c=4,0,6
    def f(a):
        global c
        a=4
        b+=3
        c=2
        return a+b+c
    
    a,b,c=2,7,5
    print(f(a),a,b,c)
    
except: print('error')
