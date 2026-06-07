try:
    a,b,c=9,4,5
    def f(a):
        global c
        a=1
        b-=5
        c=2
        return a+b+c
    
    a,b,c=7,1,6
    print(f(a),a,b,c)
    
except: print('error')
