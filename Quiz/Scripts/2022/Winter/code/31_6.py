try:
    a,b,c=6,9,5
    def h(b):
        a=4
        b*=3
        c=1
        return a+b+c
    
    a,b,c=2,8,3
    print(h(a),a,b,c)
    
except: print('error')
