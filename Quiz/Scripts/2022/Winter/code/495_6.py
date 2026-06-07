try:
    a,b,c=1,0,9
    def f(a):
        global c
        a-=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=4,6,7
    print(f(a),a,b,c)
    
except: print('error')
