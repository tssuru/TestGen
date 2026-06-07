try:
    a,b,c=4,5,9
    def g(a):
        a=2
        b+=1
        c=3
        return a+b+c
    
    a,b,c=7,1,6
    print(g(a),a,b,c)
    
except: print('error')
