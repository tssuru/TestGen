try:
    a,b,c=6,8,0
    def h(b):
        a*=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=1,5,9
    print(h(a),a,b,c)
    
except: print('error')
