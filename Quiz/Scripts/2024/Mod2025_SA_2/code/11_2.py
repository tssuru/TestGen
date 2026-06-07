try:
    a,b,c=7,3,5
    def f(a):
        a=4
        b+=5
        c=1
        return a+b+c
    
    a,b,c=2,1,9
    print(f(a),a,b,c)
except: print('error')
