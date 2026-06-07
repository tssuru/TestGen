try:
    a,b,c=3,4,1
    def h(b):
        a=4
        b+=3
        c=2
        return a+b+c
    
    a,b,c=9,1,4
    print(h(a),a,b,c)
    
except: print('error')
