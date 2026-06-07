try:
    a,b,c=0,5,6
    def h(b):
        a=3
        b+=5
        c=2
        return a+b+c
    
    a,b,c=4,2,3
    print(h(a),a,b,c)
    
except: print('error')
