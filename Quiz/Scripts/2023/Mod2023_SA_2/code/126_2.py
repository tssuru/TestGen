try:
    a,b,c=8,2,1
    def f(a):
        global c
        a=4
        b*=1
        c=4
        return a+b+c
    
    a,b,c=4,3,7
    print(f(a),a,b,c)
    
except: print('error')
