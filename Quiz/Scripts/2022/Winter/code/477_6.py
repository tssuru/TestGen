try:
    a,b,c=2,1,9
    def f(a):
        global c
        a=4
        b*=4
        c=2
        return a+b+c
    
    a,b,c=7,2,0
    print(f(a),a,b,c)
    
except: print('error')
