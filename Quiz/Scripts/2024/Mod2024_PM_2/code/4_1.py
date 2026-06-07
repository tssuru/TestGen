try:
    a,b,c=5,2,6
    def h(b):
        a+=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=0,7,1
    print(h(a),a,b,c)
    
except: print('error')
