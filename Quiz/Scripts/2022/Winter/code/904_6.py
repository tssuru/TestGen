try:
    a,b,c=7,6,1
    def h(b):
        a=5
        b+=3
        c=1
        return a+b+c
    
    a,b,c=9,4,1
    print(h(a),a,b,c)
    
except: print('error')
