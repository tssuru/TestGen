try:
    a,b,c=9,6,4
    def g(a):
        a=3
        b+=5
        c=4
        return a+b+c
    
    a,b,c=1,8,5
    print(g(a),a,b,c)
    
except: print('error')
