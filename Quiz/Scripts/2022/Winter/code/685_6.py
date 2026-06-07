try:
    a,b,c=5,0,1
    def f(a):
        global c
        a+=5
        b=5
        c=2
        return a+b+c
    
    a,b,c=4,5,9
    print(f(a),a,b,c)
    
except: print('error')
