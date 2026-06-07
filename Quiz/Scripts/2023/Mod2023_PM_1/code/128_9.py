try:
    a,b,c=2,5,9
    def h(a):
        a=5
        b+=2
        c=3
        return a+b+c
    
    a,b,c=7,6,1
    print(h(a),a,b,c)
    
except: print('error')
