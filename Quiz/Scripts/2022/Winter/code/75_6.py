try:
    a,b,c=7,0,4
    def h(a):
        a+=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=3,2,6
    print(h(a),a,b,c)
    
except: print('error')
