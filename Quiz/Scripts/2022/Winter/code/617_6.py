try:
    a,b,c=9,7,2
    def f(b):
        global c
        a=3
        b-=4
        c=1
        return a+b+c
    
    a,b,c=8,9,8
    print(f(a),a,b,c)
    
except: print('error')
