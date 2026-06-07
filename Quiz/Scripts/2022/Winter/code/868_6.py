try:
    a,b,c=4,1,8
    def h(b):
        a=3
        b*=1
        c=2
        return a+b+c
    
    a,b,c=6,5,7
    print(h(a),a,b,c)
    
except: print('error')
