try:
    a,b,c=2,4,0
    def f(a):
        global c
        a=1
        b*=4
        c=2
        return a+b+c
    
    a,b,c=8,5,3
    print(f(a),a,b,c)
    
except: print('error')
