try:
    a,b,c=8,5,4
    def f(a):
        a=3
        b+=1
        c=2
        return a+b+c
    
    a,b,c=7,3,7
    print(f(a),a,b,c)
except: print('error')
