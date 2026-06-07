try:
    a,b,c=5,2,3
    def f(a):
        global c
        a=4
        b-=3
        c=1
        return a+b+c
    
    a,b,c=1,9,7
    print(f(a),a,b,c)
    
except: print('error')
