try:
    a,b,c=4,9,6
    def g(a):
        a=2
        b+=5
        c=4
        return a+b+c
    
    a,b,c=3,5,6
    print(g(a),a,b,c)
    
except: print('error')
