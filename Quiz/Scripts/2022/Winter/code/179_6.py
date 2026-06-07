try:
    a,b,c=3,6,9
    def f(a):
        global c
        a=4
        b-=2
        c=1
        return a+b+c
    
    a,b,c=8,7,0
    print(f(a),a,b,c)
    
except: print('error')
