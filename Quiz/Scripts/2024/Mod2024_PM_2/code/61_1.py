try:
    a,b,c=5,2,4
    def f(a):
        a+=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=9,1,0
    print(f(a),a,b,c)
    
except: print('error')
