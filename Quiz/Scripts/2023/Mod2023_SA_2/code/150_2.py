try:
    a,b,c=3,2,9
    def h(b):
        a=2
        b+=5
        c=1
        return a+b+c
    
    a,b,c=7,4,1
    print(h(a),a,b,c)
    
except: print('error')
