try:
    a,b,c=6,8,3
    def f(a):
        global c
        a=4
        b-=3
        c=1
        return a+b+c
    
    a,b,c=1,5,2
    print(f(a),a,b,c)
    
except: print('error')
