try:
    a,b,c=8,1,0
    def g(a):
        a=4
        b+=3
        c=1
        return a+b+c
    
    a,b,c=7,2,5
    print(g(a),a,b,c)
except: print('error')
