try:
    a,b,c=6,2,5
    def f(a):
        global c
        a=5
        b+=2
        c=4
        return a+b+c
    
    a,b,c=9,8,0
    print(f(a),a,b,c)
    
except: print('error')
